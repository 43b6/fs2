#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","���г���վ");
	set( "build", 74 );
    set("long",@LONG
���������гǵ���վ, ��Ϊ������ͨ������ɽ���ɽ��ɵıؾ�֮·, 
��������Կ���·��һ�ѵ�ʿ������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su2",
]));

    setup();
}
