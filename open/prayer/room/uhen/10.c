//__DIR__"uhen/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

	��Ϊ����Ÿ������İ칫��. ����������������֮�Ľ��ɵ��ӵ���Ϣ��
        �ù�����������µ��ӿ�����ʱ����䷿������Ϣһ��. �ɴ˿ɼ�����
        ���Բ��µĹ���. �����Ϳ����������������������ݲ�����. ��
LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"11",		//��������
	"southeast":__DIR__"9",		
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/prayer/npc/trainee2" : 1,		//����
   "open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
