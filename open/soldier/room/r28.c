
inherit ROOM;
void create()
{
set("short", "������");
set("long", @LONG
    �����Ƿ��Ҿ��Ļ����ң�������ǰ��һ��Բ�������
����һЩ�ļ��͵�ͼ����Բ����������һ��λ���ûƽ��
��ģ��ǳ���ҫ�ۡ��ڶ���ǽ�ϲ������������ƺ�����Ҫ
���������ս��������(weapon)�󷽺�����һ���ţ�����
�����ظС�����

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r29.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "weapon" : "һ�ѳ����ͱ���,������������ж���(things)��\n",
  "things" : "�㿴��һ��..�ڿ���Ҫ��Ҫ�ѱ�������(turn)������\n",     
]));


setup();
}

void init()
{
  add_action("do_turn", "turn");
}

int do_turn(string arg)
{
object me;
me=this_player();
if(me->query("class")!="soldier")
return notify_fail("ֻ��ְҵӶ�����á�\n");
message_vision("$N�������������ȥ���ڳ�����һ���š�\n", me);
message_vision("$N˳���ƿ������˽�ȥ������\n", me);
me->move("/open/soldier/room/r22.c");
return 1;      
 }
              
   
  
  
  
