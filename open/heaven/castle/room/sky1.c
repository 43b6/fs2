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
  "north" : __DIR__"sky0",
  "southeast" : __DIR__"sky5",
  "southwest" : __DIR__"sky2",
]));
        set("outdoors",1);
        set("no_transmit",1);
        setup();
        }
