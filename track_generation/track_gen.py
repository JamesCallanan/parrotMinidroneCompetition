from pybars import Compiler
import math
import random

def applySwap(KeyPairs, File):
	Template_File = open(File, 'r')
	with Template_File:
		source = Template_File.read()
	compiler = Compiler()
	template = compiler.compile(source)
	Swapped = template(KeyPairs)
	return Swapped

def writePathSeg(Output_File,segment_no, rotation_angle,x_line_translation, y_line_translation,segment_length,segment_width):
	LineKeyValPairs = {	
			'segment_no': segment_no,
			'rotation_angle': rotation_angle,
			'x_translation': x_line_translation,
			'y_translation': y_line_translation,
			'segment_length': segment_length,
			'segment_width': segment_width}
	Output_File.write(applySwap(LineKeyValPairs, r'C:\Users\james\Desktop\Summer 2020\track generator\TrackSegTemplate.wrl'))

def main(): 
	Output_File = open(r"C:\Users\james\Desktop\Summer 2020\James Drone\parrotMinidroneCompetition\support\asbQuadcopterWorld.wrl", 'w')
	
	min_no_segs = 5 
	max_no_segs = 10
	no_segs = random.randint(min_no_segs, max_no_segs)

	segment_width = 0.1

	min_seg_len = 2.5*segment_width
	max_seg_len = 1.5

	max_path_angle = 1.58 #assume no greater than 90 deg turns
	#rel_angle #marks angle change between new track segemnt and prev track segment
	start_x_pos = 57
	start_y_pos = 95

	#parameters specified by Mathworks
	radius = 0.1
	circle_track_offset = 0.25

	#Writing fixed base content to output file
	Output_File.write(open(r"C:\Users\james\Desktop\Summer 2020\track generator\Base.wrl",'r').read()+'\n')

	cos_rot_angle = 0.0
	sin_rot_angle = 0.0


	#x_ref and y_ref mark the position new track components (straight line segments and landing circle) will start from
	#Initially set to drones start x,y position - hence drone starts over track
	x_ref = start_x_pos
	y_ref = start_y_pos

	segment_length = min_seg_len
	running_segment_length = 0
	rotation_angle = 0
	for N in range(1,no_segs): # The number of track segments we'll have...	
		#while(isValid()) - next four lines in while loop
		segment_length = random.uniform(2.5*segment_width,max_seg_len)
		running_segment_length = running_segment_length + segment_length
		#rel_angle = random.uniform(-max_path_angle, max_path_angle)
		rotation_angle = rotation_angle + random.uniform(-max_path_angle, max_path_angle)

		#centre of line segments - straight line approx gives offset of L/2 *sin phi - but more overlap of tracks needed to avoid gaps at track segment juntions
		#do i add this term- 0.5*segment_width*math.cos(rotation_angle) for x
		cos_rot_angle = math.cos(rotation_angle)
		sin_rot_angle = math.sin(rotation_angle)

		#ignoring width of path - hence assuming straight line
		centre_x = x_ref + 0.5*(segment_length)*cos_rot_angle
		centre_y = y_ref - 0.5*(segment_length)*sin_rot_angle

		#centre_x = x_ref + 0.5*(segment_length-segment_width*cos_rot_angle)*cos_rot_angle
		#centre_y = y_ref - 0.5*(segment_length-segment_width*sin_rot_angle)*sin_rot_angle
		##Writing line segment objects to file
		writePathSeg(Output_File,N, rotation_angle, centre_x, centre_y, segment_length, segment_width)
		

		# NEED TO NORMALISE THE SEGMENT WIDTH TIMES THE SIN AND COS
		#should it just be segment_lenght or should we take into account segment width
		x_ref = centre_x + 0.5*(segment_length)*cos_rot_angle
		y_ref = centre_y - 0.5*(segment_length)*sin_rot_angle

		#store end_x,end_y and prev_end_x and end_y so we can check track sections for overlapping
	
	x = x_ref + circle_track_offset*cos_rot_angle
	y = y_ref - circle_track_offset*sin_rot_angle

	CircleKeyValPairs = {	
			'x_translation': x,
			'y_translation': y,
			'radius': radius}


	#Writing circle object to file
	Output_File.write(applySwap(CircleKeyValPairs, r'C:\Users\james\Desktop\Summer 2020\track generator\CircleTemplate.wrl'))
	Output_File.close()

	f = open(r"C:\Users\james\Desktop\Summer 2020\James Drone\parrotMinidroneCompetition\track_data.txt", 'w')
	f.write(repr(x)+ ' ' + repr(y) + ' ' + repr(no_segs) + ' ' + repr(running_segment_length))
	f.close()

main()