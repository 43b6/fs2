
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","ħ֮����");
        set ("long","ħ�����ƻ����仯, �Ǳ�ɽ��֮��ĺ����, ��\ͷ����, ��Ӱ�μ�, ������
��, ��֪��ˮ��Ѫ. ͻ������������������Ϣ, ȴ�ǻ�������, ǿ�ҵ���
��ʹ��������������, �����������������ѱ������席����. ħ���
ʯ�ȹ�����, ����а�����ܱ���, ħ�����Ѩ��. 
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "west" :  __DIR__"room80",
            "south"  : __DIR__"room78",
      ]));
  set("objects", ([ /* sizeof() == 1 */
      __DIR__"npc/turtle-guard" : 1,
                  ]));

        setup();
}
