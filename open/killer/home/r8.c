inherit ROOM;
void create()
{
  set ("short", "ɱ����ϰ��");
  set ("long", @LONG
���ǳ���ɱ��ѵ���ĵط�
��Ҫ��Ϊ�õ�ɱ�ֱ��뾭�����ϵĶ���
�����������������ɱ�ֵķ���֮һ

LONG);

  set("light_up", 100);
  set("no_magic", 10);
  set("exits", ([ /* sizeof() == 1 */
        "north":__DIR__"r5",
]));
  set("objects",([
	"open/killer/npc/trainee1" :3, ]));
 setup();
}
