//__DIR__"19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

	������ܹܵ��鷿, �������ܹܴ�������ĵط�. ��
        �����ܹܸս��ļ�����׼������. ����Ǽ���������
        �е��ļ�׼��ȥ��Ϣ����Ϣ�˰�. 

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northeast":__DIR__"16",		//�ܹܷ�
        "southeast":__DIR__"18",		//�ܹܷ�
        "east":__DIR__"17",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-manager" : 1,		//�ܹ�
   		
]));
     
  setup();
}
