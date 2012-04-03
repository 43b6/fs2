inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;

void create()
{
    set_name(HIW"冰封秘咒"NOR,({"ice_spell book","book"}));
    set("long","
一本老旧的古书，里面似乎隐藏着什么神秘的法术，你可以试着修习(studying)一番...
        \n");
    set("unit","本");
    set("value",100);
    set("no_give",1);
    set("no_drop",1);
    set("no_steal",1);
    set("no_get",1);
    set("no_put",1);
    set("no_sac",1);
    set("no_auc",1);
    set_weight(50);
    setup();
}
int query_autoload() { return 1; }
void init()
{
        add_action("do_learn","studying");
}

int do_learn(string arg)
{
        object me = this_player();
        object ob = this_object();
        
        if(me->query("get_book")==1) {
    if(!id(arg)) return notify_fail("你想修习什么东西？\n");
    if(me->is_busy() || me->is_fighting())
                return notify_fail("你这会儿忙的没时间修习冰封秘咒唷！\n");
        if((int)me->query("force") < 300)
                return notify_fail("你的经验值不足以修习这门冰封秘咒！\n");
        if((int)me->query("combat_exp") < 5000000)
                return notify_fail("你的经验值不足以修习这门冰封秘咒！\n");
        if(me->query_temp("icespell/learning")==1)
                return notify_fail("你正在修习这门冰封秘咒ㄚ！\n");
    if((int)me->query("gin") < 100 || (int)me->query("sen") < 100)
                return notify_fail("你没有足够的精神来修习这门冰封秘咒！");
    if(me->query("class")!="taoist")
                return notify_fail("你的职业不能修习这门冰封秘咒！");
        if(me->query_temp("icestorm/ice_spell")==7)
                return notify_fail("你应该先看看那封信吧！");
                message_vision(HIY"$N屏气凝神，心专眼注的盯着「$n"HIY"”仔细的参悟其中的奥妙～\n"NOR,me, ob);
                me->set_temp("icespell/learning",1);
                call_out("learning",20+random(10), me);
                return 1;
        }
}
int learning(object me)
{
    object ob = this_object();
    int sub = 50+random(50);
    int time = (int)me->query("icespell/time");
    time = 200-time;

    if(me->query_temp("icespell/learning")==1)
  {
    if((int)me->query("force") < 300 || (int)me->query("sen") < 100 || (int)me->query("gin") < 100)
    {
        message_vision(HIB"由于$N的精神及内力不够，于是完全无法静心参看「$n"HIB"”的内容...\n",me, ob);
                me->delete_temp("icespell/learning");
        return 1;
    }
        if(time == 195) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第一章》"HIM"「薄雾形冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
        else if(time == 180) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第二章》"HIG"「细雨降冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
        else if(time == 155) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第三章》"HIB"「珠露结冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 125) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第四章》"HIY"「寒霜成冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 85) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第五章》"HIR"「凌云化冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 50) {
                message_vision("$N努力的参透了‘$n’的"HIC"《第六章》"HIW"「皑雪凝冰”"NOR"！\n",me, ob);
                me->delete_temp("icespell/learning");
                me->add("icespell/time",1);
                return 1;
        }
    else if(time == 0) {
                message_vision(HIY"$N经过一番努力的参透，终于悟得了‘$n"HIY"’的真理，习得了奥义秘招"HIW"【冰雪风暴】"NOR"！！！\n",me, ob);
                me->delete("get_book");
                me->delete("icespell/time");
                me->delete_temp("icespell/learning");
                me->set("get_icestorm",1);
                destruct(ob);
                return 1;
    }
    else {
                message_vision(HIC"$N努力的耗费精神参读「$n"HIC"”的内容，似乎又有了一些新的体悟...\n"NOR,me, ob);
                me->add("icespell/time",1);
                me->add("gin",-sub);
                me->add("sen",-sub);
                me->add("force",-300);
                me->delete_temp("icespell/learning");
                return 1;
        }
  }
}
        
