inherit ROOM;

void create ()
{
set ("short", "ɱ����Ϣ��");
set ("long", @LONG
������ɱ�����ڽ���һ������ѵ֮����Ϣ�ĺõط�����ר��Ϊ�����
ֻ������������й���ǧ��������񹦡����Կ��ٻظ�������
���ǣ�һ����������ʲ��ã������޷��ڶ�ʱ���ڣ�����̫��λظ���
��ظ��ľ�������ʦ���йػظ����°ɡ�������

LONG );

set("exits", ([ /* sizeof() == 2 */
     "east" : __DIR__"waterm.c",
]));

set("objects", ([ /* sizeof() == 1 */
"/open/killer/npc/rester.c" : 1,
]));

set("light_up", 1);
setup();
}