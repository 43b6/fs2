#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG

   ��������һ������ɽ��֮�С�ǰ���ƺ���һ�������
   ��������һƬɽ��Ⱥ����ľ�����Ǻܶࡣ
   ��һ����������һ����ʾ��(sign)
   

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3   �Ϸ�Ҫ�ӻغ�ɽ�ķ�����*/
     "northeast" : __DIR__"hr2.c",
     "north" : __DIR__"hr5.c",
     "south" : "/open/killer/mon/room/wood14.c",   
]));
  set("item_desc", ([ /* sizeof() == 2 */
        "sign":" ɱ�ֹ����ϴ�����ɽ����\n����������뼮��ƽ���뾡���뿪\n",
]));

  setup();
}
