#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "���г�֮����");
	set( "build", 6 );
  set ("long", @LONG
һ���߲���ʯ������չ��������ǰ,�ƺ�����˵�����гǵ���
Զ��ʷ,���ʵĳ�ǽ,������Ҷ�(sign),���������Ҳ�����й���
�Ի͵�ʱ��,�羭���Ѵ���ʷ������,ֻʣ�ɽ��ɻ���������...
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "
����һ�����ϵ��Ҷ�,ֻ����������:

    ��ʹ��ë�ѷ�Խ  ���̻������г�

                  ��ƽԪ��,���Ǽ���
",
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/[2]",
  "north" : "/open/gsword/room/su1.c",
]));

  setup();
}
