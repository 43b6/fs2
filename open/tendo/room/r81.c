// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","�ܵ�");
        set("long", @LONG
�Ĵ���ɭɭ�ģ�������������һ�ɲ�Ѱ������Ϣ�������������
�Ļ��Ҳ�Ե�ʮ�ֵİ����������ĳ���ʹ���Ӳ�������һ�ɺ��ⲻ��
��Ȼ������������һֱ�ڽ����ͷ����Ҫ������ǰ����....
LONG);
set("exits", ([
	"out":__DIR__"r74",
	"southwest":__DIR__"r82",
]));
  setup();
}
