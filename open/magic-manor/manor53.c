#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIY"�����"NOR);
	set ("long", @LONG
����أ��Ǿ���ɽׯ��һ�����صĳ��ӣ�ɽׯƮɢ������������
����Ʈ�������󱻾�������գ��ھ�������ģ��ۼ���ǿ�����
�������������ģ���������ǿ�ң����۳������⣬�ڳ��������ػ�
�Ĵ�Խ���ڣ�ɲ�Ǻÿ���
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor68",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
