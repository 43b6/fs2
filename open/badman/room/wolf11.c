inherit ROOM;
void create()
{
    set ("short","����");
  set ("long",@LONG
������һ��û����ס���� ,��ȴ����ɨ��һ����Ⱦ .ǽ�ϵ�����
��Ȼ������ ,�����ϾƲ˻����ȵ� .������ȴ�ǹ������� ,��ȴû����
�� ,������䷿�ӱ��йŹ�....
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wolf10.c",
]));

  setup();
}
