inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "Сɭ��");
        set ("long", @LONG
�Ӳ�ԭһ·�����������Ե�С�ݲ�֪��ʱ�ѽ����Ļ��ɽϸߴ��
��ľ�ˣ��㲻ʱ�Ļ�Ҫ�ӽ��������Ե�·��С��֦�������ǵĽ���Ҳ
��������
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town44",
        "west"	: __DIR__"town42",
	]));

        setup();
}