//不死印法 by bss
#include <ansi.h>
inherit SKILL;

string *parry_msg =
({

        "\n"HIY"$n体内的阴阳二气快速运转，正正反反，反反正正，将$N攻击的内劲化为己用。"NOR"\n",

        "\n"HIR"面对$N强大的攻势，$n强运不死印法，将$N那强大的内劲硬是传到了身后的地上，使地上留下了一个足足有尺余的脚印。"NOR"\n",

        "\n"MAG"$n双手平推而出，阴阳劲气一吐，再身前形成一道气墙，将$N猛烈的攻势抵消掉了。"NOR"\n",

});

int valid_enable(string usage) {
int family;
object me=this_player();
if ( me->query("family/family_name") != "东厂")
        return (usage=="parry");
else
 return notify_fail("只有东厂太监才能用不死印法!!\n");

}

string query_parry_msg(string limb){

        return parry_msg[random(sizeof(parry_msg))];
}

int valid_learn(object me)
{
       if(me->query_skill("taiyiforce",1) < 60)
 {
   write("你的太乙罡气不够纯熟..无法学习不死印法\n");
   return 0;
 }
        return 1;
}









