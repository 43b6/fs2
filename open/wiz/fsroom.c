inherit ROOM;
#include <ansi.h>
void create ()
{
    set ("short", "����ռ佨�Դ�");
	set( "build", 60 );
    set ("long", @LONG
��������ÿ�����������������ڿ���ռ�Ľ���ĵط�::
����:����(clan)������(class)������(skill)�뵽�ʺϵĵ�
��֮��,��Կ�����ƶ�,����,���ܹ��кν���ĵط�������
�����﷢��

	����ռ���ʦ��������� (help area)

LONG);

    set("valid_startroom", 1);
    set("no_transmit", 1);
    set("exits", ([ /* sizeof() == 2 */
//	"south" : "/open/wiz/meqroom.c",
	"north" : "/open/common/room/inn",
      ]));
    set("light_up", 1);
    set("no_kill", 1);
    set("no_chome", 1);
    set("no_fight", 1);

    setup();
    //call_other("/obj/board/fsstr_b","????");
}
