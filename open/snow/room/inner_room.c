#include <room.h>

inherit ROOM;

void create()
{
	set("short","����");
          set("long",@LONG
������ѩ��������ƽʱ��Ϣ�ĵط�������İ��輫���������ӣ�ֻ��ǽ�Ϲ��˶Ե���
���Եü������ɣ��ഫ��Ե�������ѩ���ɿ�ɽ��ʦ��һλ�������е����ģ�ֻ�ǿ�ϧѩ��
�ɿ�ɽ��ʦ��Ӱ���˲��ᵶ������������Դ˵�����������
 
 
LONG);
        set("exits", ([
	"west":__DIR__"room8",
        ]) );
     set("objects",([
     "/open/snow/npc/kai.c": 1,
]));
	set("light_up",1);
        setup();
}
