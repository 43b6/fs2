// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIW"������"NOR);
set ("long", @LONG
������յǧ�����ϣ�ӳ��ˮ�����Բ��⣬�ֵ�ӳ��һɽһľһʯһ
Ҷ���ĵð�����������ѩ�ޣ�����Χ�����̲�Ϊ�أ�����ʯΪ׺��
�����Ի�������Ұ������ӻأ�Ҷ���������������ΧԲ��ʯ����
Ϊ���ģ��Ǻ�����ʿ�����硣
LONG);



  set("exits", ([
            "east"  : __DIR__"80",
            "west"  : __DIR__"79",
                ]));

        setup();
}
