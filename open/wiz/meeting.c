#include <room.h>

inherit RECORD_ROOM;

void create()
{
	set("short", "��ʦ������");
	set("long", @LONG

	�����ң�

	Ŀǰֻ��¼����say��ѶϢ��û����˭����¼����
	���ң�¼����ֻ������ /log �¡�

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "back"  : __DIR__"entrance",
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("no_magic", 1);
	seteuid ("ROOT");

	setup();
	call_other("/obj/board/wiz_record_b","???");
}
