#include <room.h>

#define TEST "START ROOM for test"

inherit ROOM;

void create ()
{
  seteuid(getuid());
  set ("short", TEST);
  set ("long", @LONG

		�����ɷ���ѧ LPC(MudOS)?
		�Ժ���������������


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "dlong"	: __DIR__"dlong",
  "tel"		: __DIR__"tel",
  "stack"	: __DIR__"stack",
]));

  setup();
}
