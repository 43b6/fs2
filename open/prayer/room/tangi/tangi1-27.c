//open/prayer/room/tangi/tangi1-27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"����ŵ����䳡,���䳡�ϵĵ�����������. ����ʥ��̵���ѧ��������,����֮һ��
���챦���ķ�,��Ů�������������������ѧ!!��ϰ֮�󲻵�����ǿ���������!!����
�����������̾Ϊ��ֹ�ľ�������!!\n");

                set("outdoors", "/u/r/rence");
                set("exits", ([ /* sizeof() == 3 */
                "north":"/open/prayer/room/tangi/tangi1-22",            //���䳡
        "south":"/open/prayer/room/tangi/tangi1-32",            //���䳡
        "west":"/open/prayer/room/tangi/tangi1-26",             //���䳡
         
        ]) );
                set("no_fight", 0);
                set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2" : 2,              //����
                
]));
     
  setup();
}
