//open/prayer/room/garden1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰���");
        set("long",@LONG

	    ��̳�Ļ�԰��������һ��ľ�Ƶ�դ������
	���Դ��� (open door)���߽�ȥ��԰������
	�ƣ���˵�������кܶ������Ұ��......����
	�����������׼��!!��Ϊ�����ǲ���������
	��.

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
      "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden3",		//��԰
        "east":"/open/prayer/room/train1-4",     //����
 
        ]) );
        
        set("objects",([ /* sizeof() == 0 */
  "/open/prayer/npc/dog" : 2,		//��Ȯ
   		
]));
        create_door("north","ľ��դ��", "south",DOOR_CLOSED);
  setup();
}
