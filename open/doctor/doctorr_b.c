// doctor_b.c
#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
	set_name(HIW"���ֽ�����"NOR,({ "board" }) );
	set("board_id", "doctorr_b");
set("location", "/open/doctor/room/doctor_room");
	set("long","\t����һ����ҽ��ҽ�����������԰�\n");
	setup();
	set("capacity", 100);
}
