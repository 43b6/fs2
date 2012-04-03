inherit ROOM;

void create ()
{
  set ("short", "玄机房");
  set ("long", @LONG
这里是段誉夫妇所居住的玄机房,段誉虽为一代武林高手,但却潜心研
究易经八卦及伏羲六十四卦,在这里可以看到堆积如山的易经书籍,地上还
有一个破掉的龟壳(broken shell)。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"aa23",
]));
  set("objects", ([ /* sizeof() == 2 */
"/open/tailong/npc/yan.c":1,
"/open/tailong/npc/duanyu.c":1,
]));
 set("item_desc", ([ /* sizeof() == 1 */
"broken shell" : "
这是一个占卜用的龟壳,不过已经破掉了,不能够再用....
",
]));

  setup();
  replace_program(ROOM);
}
