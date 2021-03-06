#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
    object ob;
    int sk, sk2;
    sk = (int)me->query_skill("cure",1);
    sk2 = (int)me->query_skill("godcure",1);    
    if(!me) return 1;
    if(!arg) return notify_fail("指令格式：cmd heal <id>\n");
    if(environment(me)->query("no_kill") == 1)
    return notify_fail("此地不适合医生看诊唷！\n");
    if(me->query("family/family_name") != "银针门" && !wizardp(me))
    return notify_fail("你不是个医生，怎么能帮人看诊？\n");
    if(sk < 120) return notify_fail("你的医术不够，尚无资格帮人看诊！\n");
    if(sk2 < 100) return notify_fail("你的华佗医术不够，尚无资格帮人看诊！\n");
    if(!me->query("doctor/vet")) return notify_fail("你还没有经过华佗的认证唷！\n");
    if(me->query("gin") < 500) return notify_fail("你的精力不足，没有办法帮人看诊！\n");
    if(me->query("sen") < 500) return notify_fail("你的神瞑不足，没有办法帮人看诊！\n");
    if(me->is_fighting() || me->is_busy()) return notify_fail("你还是先把手边的事忙完吧！\n");
    arg = lower_case(arg);
    ob = present(arg, environment(me));
    if(!objectp(ob)) return notify_fail("你想要看诊哪位病人啊？\n");
    if(!ob->is_character()) return notify_fail("你只能帮人看诊好不好！\n");
    if(ob->is_corpse()) return notify_fail("现在才要帮他看诊疗...太迟了些吧？\n");
    message_vision(HIW"$N抓着$n的手，聚精会神的为$n把把脉，开始看诊了起来！\n"NOR,me, ob);
    if(ob->query_temp("over/right")&&ob->query_temp("over/left")) {
        message_vision(HIC"原来$N双手受伤，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/right");
        ob->delete_temp("over/left");
        ob->delete_temp("hand-all");
        } else if(ob->query_temp("over/r-eyes")&&ob->query_temp("over/l-eyes")) {
        message_vision(HIC"原来$N双目失明，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/r-eyes");
        ob->delete_temp("over/l-eyes");
        ob->delete_temp("eyes-all");
        } else if(ob->query_temp("over/left")) {
        message_vision(HIC"原来$N左手受伤，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/left");
        } else if(ob->query_temp("over/right")) {
        message_vision(HIC"原来$N右手受伤，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/right");
        } else if(ob->query_temp("over/r-eyes")) {
        message_vision(HIC"原来$N右眼失明，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/r-eyes");
        } else if(ob->query_temp("over/l-eyes")) {
        message_vision(HIC"原来$N左眼失明，还好我这有药膏，擦擦就没事了!\n"NOR,ob);
        ob->delete_temp("over/l-eyes");
        } else {
        message_vision(HIW"$N身体很健健康康没有生病!\n"NOR,ob);
        }
    me->receive_damage("gin",500);
    me->receive_damage("sen",500);
    return 1;
}
int help(object me)
{
        write(@HELP
指令格式：cmd heal <id>
指令说明：
　　　       医生专为眼睛失明双手受伤的医疗！
HELP);
        return 1;
}

