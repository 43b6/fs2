inherit ROOM;
void create() {
	set( "short", "$HIC$٫$HIR$��$NOR$��$NOR$" );
	set( "object", ([
		"file9"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/scholar/obj/icefan",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 7,
		"file10"   : "/open/killer/weapon/k_torch",
		"file8"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
	]) );
	set( "owner", "staind" );
	set( "light_up", 1 );
	set( "build", 10202 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room125",
	]) );
	set( "long", @LONG
                                                                               
         ��---                                   ��                             
         ����                                 ��     ��                         
                  ������������������                      ����                  
    �x�y�{�x�z�y�������������� �� ���y�z�z�y�{�}�|�z�y�{ �������y               
    �y�z�x�z�{�|���� �� �見========�x�y�z�x�y�x�����z�x���������x              
              �������������� ����������        ������   ��������                
              ���� �� �見   ����  ��          ������  ����������               
      �ts�ЩШ�   ��   ��   ����      �ЩЩЩЩШ��ЩЩ�  ��                   
    ��������������������������������������������������������������              
                                                                                
                                                                                
                                                                         
LONG);
	setup();
	replace_program(ROOM);
}
