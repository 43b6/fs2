//open/prayer/room/youkoun/14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        ���鷿���Ϸ�, �и���������͵����Ϣ, �Ͼ����Լ�ҹ��
        �����鷿���Ǻ����˵�! �����û���ش������ʱ��, ��
        ��Ҫ�һ��Ჹ��һ�¾���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "northwest":__DIR__"15",                //�ܹܷ�
        "north":__DIR__"13",            //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon1" : 1,                //����
                
]));
     
  setup();
}
