inherit ROOM;
void create ()
{
  set ("short", "战功兑换处");
  set ("long", @LONG

此处是用来兑换战功的地方!!目前可以兑换的项目如下：
-------------------------------------------------------------
  项  目           单 位          所需战功              兑换指令
01.最大值灵力         1                3               need_max_atman
02.最大值法力         1                3               need_max_mana
03.最大值内力         1                5               need_max_force
04.替身               1               80               need_standby
05.臂力属性           1              120               need_str
06.胆识属性           1              120               need_cor
07.容貌属性           1              120               need_per
08.根骨属性           1              120               need_con
09.悟性属性           1              150               need_int
10.福缘属性           1              150               need_kar
11.灵性属性           1              200               need_spi
12.定力属性           1              200               need_cps

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road1",
]));
  setup();
}
void init()
{
  add_action("max_atman","need_max_atman");
  add_action("max_mana","need_max_mana");
  add_action("max_force","need_max_force");
  add_action("standby","need_standby");
  add_action("str","need_str");
  add_action("cor","need_cor");
  add_action("per","need_per");
  add_action("con","need_con");
  add_action("intt","need_int");
  add_action("kar","need_kar");
  add_action("cps","need_cps");
  add_action("spi","need_spi");
/*
  add_action("meq","need_meq");
  add_action("godeq","need_godeq");
*/
}

int max_atman()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 3) {
  me->add("war_kills",-3);
  me->add("max_atman",1);
log_file("clan/atman", sprintf("%s(%s)换取用三点战功换取了一点的灵力值\n"
   ,me->query("name"),me->query("id")));
  write("您用三点战功来增加一点最大的灵力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int max_mana()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 3) {
  me->add("war_kills",-3);
  me->add("max_mana",1);
log_file("clan/mana", sprintf("%s(%s)换取用三点战功换取了一点的法力值\n"
   ,me->query("name"),me->query("id")));
  write("您用三点战功来增加一点最大的法力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
int max_force()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 5) {
  me->add("war_kills",-5);
  me->add("max_force",1);
log_file("clan/force", sprintf("%s(%s)换取用五点战功换取了一点的内力值\n"
   ,me->query("name"),me->query("id")));
  write("您用五点战功来增加一点最大的内力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
int standby()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 80) {
  me->add("war_kills",-80);
  me->add("standby",1);
log_file("clan/standby", sprintf("%s(%s)换取用八十点战功换取了一个替身\n"
   ,me->query("name"),me->query("id")));
  write("您用八十点战功来换取一个替身。\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
int str()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("str",1);
log_file("clan/str", sprintf("%s(%s)换取用一百二十点战功换取了一点的臂力值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百二十点战功来增加一点的臂力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int cor()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("cor",1);
log_file("clan/cor", sprintf("%s(%s)换取用一百二十点战功换取了一点的胆识值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百二十点战功来增加一点的胆识值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int per()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("per",1);
log_file("clan/per", sprintf("%s(%s)换取用一百二十点战功换取了一点的外表值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百二十点战功来增加一点的外表属性值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
int con()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("con",1);
log_file("clan/con", sprintf("%s(%s)换取用一百二十点战功换取了一点的根骨值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百二十点战功来增加一点的根骨值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
int intt()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 150) {
  me->add("war_kills",-150);
  me->add("int",1);
log_file("clan/int", sprintf("%s(%s)换取用一百五十点战功换取了一点的悟性值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百五十点战功来增加一点的悟性值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int kar()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 150) {
  me->add("war_kills",-150);
  me->add("kar",1);
log_file("clan/kar", sprintf("%s(%s)换取用一百五十点战功换取了一点的福缘值\n"
   ,me->query("name"),me->query("id")));
  write("您用一百五十点战功来增加一点的福缘值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int cps()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 200) {
  me->add("war_kills",-200);
  me->add("cps",1);
log_file("clan/cps", sprintf("%s(%s)换取用二百点战功换取了一点的定力值\n"
   ,me->query("name"),me->query("id")));
  write("您用二百点战功来增加一点的定力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int spi()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 200) {
  me->add("war_kills",-200);
  me->add("spi",1);
log_file("clan/spi", sprintf("%s(%s)换取用二百点战功换取了一点的灵力值\n"
   ,me->query("name"),me->query("id")));
  write("您用二百点战功来增加一点的灵力值\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
// 关掉用战功换 meq and godeq by swy
// meq and godeq 将放至 area 上由 ppl k npc 得 by swy
/*
int meq()
{
 object me = this_player(),mid;
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 600) {
  me->add("war_kills",-600);
  mid=new("/data/autoload/blademan/mdragon");
  mid->move(me);
log_file("clan/meq", sprintf("%s(%s)换取用六百点战功换取魔龙型防具\n"
   ,me->query("name"),me->query("id")));
  write("您用六百点战功换取了魔龙型防具!!\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}

int godeq()
{
 object me = this_player(),mid;
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 1000) {
  me->add("war_kills",-1000);
  mid=new("/data/autoload/god/god_eq");
  mid->move(me);
log_file("clan/godeq", sprintf("%s(%s)换取用一千点战功换取天界型防具\n"
   ,me->query("name"),me->query("id")));
  write("您用一千点战功换取了天界型防具!!\n");
  return 1;
 }
 write("对不起!!您的战功值不够了!!!\n");
 return 0;
}
*/
