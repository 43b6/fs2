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
	"northwest":__DIR__"r83",
	"north":__DIR__"r85",
]));
  setup();
}
