//open/prayer/room/youkoun/21.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�����Ͻ�, ������Ů������Ŀ��ת���ؿ��ų���
        ʦ��ǵ�ʾ��. ��������ôŬ��ѧϰ������, �������˸�
        ��! ֻ�ǲ�֪�����ǵ���ѧ�̶ȵ������?

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"18",            
        "east":__DIR__"20",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,              //����
  "/open/prayer/npc/trainee3" : 1,              //����
                
]));
     
  setup();
}
