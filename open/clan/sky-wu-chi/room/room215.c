inherit ROOM;
void create() {
	set( "short", "���﷿" );
	set( "object", ([
		"amount6"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/daemon/class/fighter/ywhand",
		"file8"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount8"  : 1,
		"file1"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "diana" );
	set( "build", 10055 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room235",
		"south"     : "/open/clan/sky-wu-chi/room/room214.c",
		"west"      : "/open/clan/sky-wu-chi/room/room236",
	]) );
	set( "long", @LONG
 �q�Щ����Щ����r       ��         �q��    ��   ���੤�r  �q�s    ��    �q�s
   ��������  �q�ة��r ������     �q��    ������   ��  ���q�s�q  �q���r�q�s�q
   ��������  ��    ��   ��   ���r�s���q�r������   ��  ���t����  �b�T�e�t����
 ���ة����੤�t�����s   ��   �q�s  ���t�s������   ��  ��  �q�s  ��  ��  �q�s
  ��        �q�����r �q�����r�t�r����    ������ ���੤�ة��t���s�t���s  �t���s
    �q�����Шs�q���r ��    ���q�s����    ������   ��      ���������੤������
�t���s�����੤�s     ��    �����r�ةة�  �t��s �q�s�t�r    �q�s  ��  �t�r�r
�����������ة������� �t�����s�s�t��������  �� �q�s    �t�r�t�s  �t�s    �t�s
                             ��                                     ��
    ��    ��         ��            ��        ��    ��        - �� -     ��
                    ����       ��        ��                  ������
   ��     ��       ��������                 ��        ��    ��������       ��
                ������������      ��         ��            ����������
               ��������������     ��___________           ������������  ��
       ��     ����������������   ����������������        ���������~����   ��
      ����    *��������������  �����������~���~����     �����切�𨀨~��
     ������   �������������� ���������������~���~����  ���~�������~�~������
    ��������   ��������������  ��������           |   �������~�~�������~��
 �x�x�z�{�z�y�x�x�y�y��z�{�|�~���������������������������~�~�}���~�}��������
LONG);
	setup();
	replace_program(ROOM);
}
