//���֮�� Edit By Del
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "�������޵�");
        set("long", @LONG

��������һ����խ��ɽ�����棬���Ե�ɽ����Լ���Կ��������ĺۼ�����
�滹մ��һЩδ�ɵ�Ѫ�ա���������ʶ����ͷ����֮�ʣ���ǰͻȻ������
����Ӱ���㲻���ս����ϵ����� ...

LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"sky1",
  "south" : __DIR__"sky6",
]));
        set("outdoors",1);
        set("no_transmit",1);
        setup();
        }
