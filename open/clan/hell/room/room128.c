inherit ROOM;
void create() {
	set( "short", "$HIW$�㶪��һ�ѻ����ȡ�$BLK$" );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room130",
	]) );
	set( "long", @LONG

$HIB$  �W�����Z�W�����Z�W���Z�Z�W�i���Z�W�����Z�W�����Z�W    �Z
$BLU$  �c�����Z�c�����f�U  �U�U  �U    �c�����f�]�����Z�U    �U
$HIC$  �U      �U    �U�U  �U�U  �U    �U    �U      �U�]���i�`
$CYN$  �]      �]    �`�]  �]�`  �l    �]    �`�]�����`  ���l  
$HIB$                                  �W�����Z�W�����r�W�����Z�W�����Z�W�����Z
$BLU$                                  �]�����Z�U    �U�c�����f�U      �c�����Z
$CYN$                                        �U�c�����`�U    �U�U      �U      
$HIC$��$HIW$��������������������������������$CYN$�]�����`�]      �]    �`�]�����`�]�����`$HIW$��$HIC$��
$CYN$
���������ʵ�����ǣ��, �㽫�ص�ԭ�������硣
����, ϣ���㲻Ҫ�����Լ���ʹ������������ռ����ǵĳ�ŵ��
���뿪����ռ��ˡ�$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
