#include <room.h>
inherit ROOM;
void create()
{
        set("short", "�ͷ�");
        set("long", @LONG

    һ������ʵĿͷ���һ��Բ���������Ÿ���õĲ裬��͵���
��Ӵ����յ��ذ��ϣ���ô���ŵĻ�������ȷ��һ���ʺ��д�Զ����
̣�������ϵĲ������ţ���֪���˵�������λ�����

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"6",            
        "east":__DIR__"8",          
        ]) );
        set("light_up", 1);
        set("objects", ([ /* sizeof() == 1 */
        "/open/doctor/npc/chan" : 1,
]));

   setup();
}


