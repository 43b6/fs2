//open/prayer/room/youkoun/12.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        ����վ����������, �������ʱ��һֱ��������ؿ�����
        . �������С�鷿��Ȼ����ô�ౣ��, �㲻��Ϊ�����ŵ�
        ���±��Ƹе�����ΪȻ..

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"15",        //�ܹܷ�
        "south":__DIR__"13",            //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/paltoon1" : 1,                //����
        "/open/prayer/npc/paltoon2" : 1,                //����
                
]));
     
  setup();
}
