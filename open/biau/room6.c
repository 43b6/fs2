
#include <room.h>
inherit ROOM;

void create()
{
  set("short", "��������");
  set("long", @LONG
���ߵ������ӵ��ڲ�,���������,��������һ�����˼�,��Ӱ����,��ľҡҷ,����
    ��Ժ��,����ԴӶ��ߵĴ��ſ���һ�����,�򱱷�ȥ�Ǳ���,��˵�Զ����и�Ů��
    ����ʮ��Ư��.............
    �������������ߺ�����ӱ��ߴ���....
    ������һ��С����(door)��	
LONG
);

  set ("exits", ([
      "north": __DIR__"room7",
      "east": __DIR__"d_room0",
       "south": __DIR__"room0",
      ]) );
 	set("item_desc", ([     
  	"door": "һ�Ⱦ��ɵ�С����,���Դ����п�����һ�ߵľ�ɫ.\n",
  	]));
  	setup();
        create_door("east","С����","west",DOOR_CLOSED);
}
