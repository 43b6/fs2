// Room: /u/p/powell/room/gstore.c

inherit ROOM;

void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
����һ�������ļ�Ժ, ��������Ժ, ����������������, ���
����һ¥��Ժ���ο������ķ�������, ��������䵱��ջ, ��¥��
����ȫ�������᷿��. �������������Ʋ���, ��˵ˮ�ɹ��ﱻ��
�˹ȵ�ʮ�����ץ����, ��ͷ��Ȼ�˶�, ȴû��֪�����˹�λ�ں�
��, ����Ӣ�۾����Ļ��ᵽ��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tree",
  "east" : __DIR__"road1.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/hoodlum" : 1,
  "/open/center/npc/harlot" : 1,
]));
  set("light_up", 1);

  setup();
}
