inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "����");
        set ("long", @LONG
��Сɭ�������ľ���һ�ȣ����Ե�С��ľ��֪��ʱ�Ѿ����ɸ���
���Ƶİ����ľ�ˣ���Ҷ��������������Ĺ���Ҳ������΢���ˣ�
���͵�Ұ�޽������ڲ�Զ�����������������Ҳ������Ũ���ˡ�

�������·�Կ���һ�Ÿ�ʾ��(sign)��

LONG);  

	set("item_desc",([
	"sign" : "\n\tǰ\t��\n\t��\t��\n\t��\t��\n\tɭ\t��\n\t��\t��\n\t��\t��\n\t��\t��\n\t��\t��\n\tΣ\t��\n\t��\t��\n\t��\t!!\n"
	]));

        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town45",
        "west"	: __DIR__"town43",
	]));

        setup();
}