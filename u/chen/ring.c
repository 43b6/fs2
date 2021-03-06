// crack by bear

#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
#include <command.h>

inherit EQUIP;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;

string inputstr,verb;

void create()
{
  seteuid(getuid());
  set_name (HIY "天神之戒" NOR, ({ "god ring", "ring" }));
  
	set("long",@LONG
    这是一件天神因为工作需要而制作的戒指，具有神奇的魔力。

    键入<help cloak>以获得更多的资讯。
LONG
);

  set("unit","件");
  set("no_drop", 1);

  set("material", "gem");
  set("armor_prop/armor", 100);
  set("armor_type", "finger");
  set("light",1);
  setup();
}

void init()
{
  add_action("help","help");
  add_action("full","full");
  add_action("rem","rem");
  add_action("wave","wave");
  add_action("steal","steal");
  add_action ("whereis", "whereis");
  add_action ("pk_mob", "mobpk");
  add_action ("do_give", "give");
  add_action ("do_wakeup", "wakeup");
  add_action ("force_quit", "fquit");
}

int help(string str)
{

  if (str!="ring") return 0;

write(@Help

    你可以使用以下的几个命令:

       % localcmd, stat, call, data, score, skills, 等等
         请用 help wizcmds 取得进一步资料

       wave <number> <type>		<<取出哪种钱币的多少数目>
       full <玩家>              	<全医, 玩家若无输入则内定为自己>

Help

);

  return 1;
}

int full(string str)
{
	string *att_name= ({"gin", "kee", "sen", "mana", "force", "atman",});
  int i,max;
  
  object me;

  if(!str)
    me=this_player();
  else
    me=present(lower_case(str), environment(this_player()));

  if (!me) return notify_fail ("[ring]: full error: 找不到"+str+"\n");
  
	for (i=0; i<6; i++) {
		max=me->query("max_"+att_name[i]);
    me->set("eff_"+att_name[i],max);
    me->set(att_name[i],max);		
	}
  max = me->max_food_capacity();
  me->set("food",max);
  max = me->max_water_capacity();
  me->set("water",max);
  me->clear_condition();
  me->verive();
  me->delete_busy();
  	
  if (me->is_ghost()) {
    me->reincarnate();
    me->move("/open/common/room/inn");
  }
  me->clear_condition();

  message_vision( sprintf("$N唸起不死族回复咒文 [32;1m撒拉 伊克 庵修姆[37;0m  \n"),
                  this_player());
  return 1;
}

int wave (string arg)
{
        string kind;
        int amount;
        object n_money;

        if( !arg || sscanf(arg, "%d %s", amount, kind)!=2 )
          return notify_fail("[cloak]: wave <多少钱> <钱币种类>\n");

        n_money = present(kind + "_money", this_player());
        if( !n_money && file_size("/obj/money/" + kind + ".c") < 0 )
                return notify_fail("你摇了半天却什么也没有出来。\n");
        if( amount < 1 )
                return notify_fail("你摇了半天却什么也没有出来。\n");

        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(this_player());
                n_money->set_amount(amount);
        } else
                n_money->add_amount(amount);

message_vision( sprintf("$N使劲的掏口袋，突然从袋子里掏出%s%s%s。\n",
                        chinese_number(amount),
                        n_money->query("base_unit"),
                        n_money->query("name")),
                this_player());
        return 1;
}
