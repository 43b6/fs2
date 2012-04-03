#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int report=0;
int vet(object me);
int main(object me, string arg)
{
    object ob, coco;
    int sk, sk2, mk, tk, mg, tg, ms, ts, amount;
    string str, name, id;
    id = me->query("id");
    sk = (int)me->query_skill("cure",1);
    sk2 = (int)me->query_skill("godcure",1);
    
    if(!me) return 1;
    if(!arg) return notify_fail("ָ���ʽ��cmd vet <id>\n");
    if(environment(me)->query("no_kill") == 1)
    return notify_fail("�˵ز��ʺ�ҽ������ࡣ�\n");
    if(arg == id) return notify_fail("����Ҫ�Լ����Լ����\n");
    if(me->query("family/family_name") != "������" && !wizardp(me))
    return notify_fail("�㲻�Ǹ�ҽ������ô�ܰ��˿��\n");
    if(sk < 120) return notify_fail("���ҽ�������������ʸ���˿��\n");
    if(sk2 < 100) return notify_fail("��Ļ�٢ҽ�������������ʸ���˿��\n");
    if(!me->query("doctor/vet")) return notify_fail("�㻹û�о�����٢����֤ࡣ�n");
    if(me->query("gin") < 50) return notify_fail("��ľ������㣬û�а취���˿��\n");
    if(me->query("sen") < 50) return notify_fail("�������㣬û�а취���˿��\n");
    if(me->is_fighting() || me->is_busy()) return notify_fail("�㻹���Ȱ��ֱߵ���æ��ɣ�\n");
    arg = lower_case(arg);
    ob = present(arg, environment(me));
    if(!objectp(ob)) return notify_fail("����Ҫ������λ���˰���\n");
    if(!ob->is_character()) return notify_fail("��ֻ�ܰ��˿���ò��ã�\n");
    if(ob->is_corpse()) return notify_fail("���ڲ�Ҫ����������...̫����Щ�ɣ�\n");
    if(ob->query("no_kill")) return notify_fail("���������ƺ�����Ҫ���ܿ�������ӣ�\n");
    if(ob->query("no_askgod")) return notify_fail("���������ƺ�����Ҫ���ܿ�������ӣ�\n");
    if(ob->query_temp("netdead")) return notify_fail("���뿪��������磬����޷��������\n");
    if(ob->query_temp("for_vet") == 1) return notify_fail("������ο���ѵ���Ҫ�Ʒ��Լ��Ŀ�������\n");
    
    mk = (int)ob->query("max_kee");
    tk = (int)ob->query("max_kee");
    mg = (int)ob->query("max_gin");
    tg = (int)ob->query("gin");
    ms = (int)ob->query("max_sen");
    ts = (int)ob->query("sen");
    name = ob->query("name");
    
    switch(random(12))
    {
    case 0:
        report = 1;
        str = YEL"��..."+name+"����ֻ��һ��СС���˷��ð���ȵ�ˮ��Ϣһ��ͺ��ˣ�\n"NOR;
        ob->add("kee",-(random(50)+50));
        break;
    case 1:
        str = HIY"ม�"+name+"�ĳ�θ�൱����ࡣ�Ҫע���ٳԵ�̼��Ե�ʳ���ģ�\n"NOR;
        ob->set("food",-2);
        ob->set("water",-2);
        break;
    case 2:
        str = RED"��ѽ��"+name+"���ĸ�Ƣ����ȫ�ù��ˣ��������ǻؼ�׼��������°ɣ�\n
\n"HIB"û�뵽"+name+"���ԣ���Ȼ���ˡ���һ����������ȥ�ˣ�\n"NOR;
        ob->unconcious();
        ob->set("gin",mg);
        ob->set("kee",mk);
        ob->set("sen",ms);
        break;
    case 3:
        str = HIC"ࡺȣ�"+name+"��������ƽ���ȣ��������ң���ǿ�彡��û��覴ã������ţ�\n"NOR;
        break;
    case 4:
        str = WHT"��ѽ��"+name+"����Ѫɫ���ֽű��䣬�������������ϣ���Ѫʧ��ࡣ�\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("ff_poison",(int)sk/20);
        break;
    case 5:
        str = HIM"�ٺ٣�"+name+"�������죬Ŀ¶ɫ�⣬������������ǣ���į�����ģ�\n"NOR;
        ob->apply_condition("spring",(int)sk/20);
        break;
    case 6:
        str = CYN"��..."+name+"��ð�麹��ȫ�������������Ǹ�����˥�����������\n"NOR;
        ob->add("gin",-(random(50)+50));
        ob->add("kee",-(random(50)+50));
        ob->add("sen",-(random(50)+50));
    case 7:
        str = MAG"�����ˣ�"+name+"��ɫ���࣬�촽���ϣ�һ����֪���Ǳ���ҧ�ˣ������߶�ࡣ�\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("snake_poison",(int)sk/20);
        break;
    case 8:
        str = HIR"��..."+name+"��ͷ���̣�ͷ��Ŀѣ�������������չ��࣬һ��С�ľ������ˣ�\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("burn",(int)sk/20);
        break;
    case 9:
        str = HIB"�ޣ�"+name+"ȫ���䣬��ͣ�������ƶ�Ӧ����ʪ���磬���˷纮����ɶ��Ҳ��\n"NOR;
        ob->add("kee",-random(sk));
        ob->apply_condition("cold",(int)sk/20);
        break;
    case 10:
        str = GRN"ȥ..."+name+"����������ֻ�Ǿƺ�̫�࣬�е�ƺ�΢�������ǲ�����ѣ�\n"NOR;
        ob->apply_condition("drunk",(int)sk/20);
        break;
    case 11:
        str = HIG"������"+name+"�������Ȼ��׳��ţ�����޲�ʹ�����ǹ�ϲ��ϲ��\n"NOR;
        break;
        }
        message_vision(HIW"$Nץ��$n���֣��۾������Ϊ$n�Ѱ�������ʼ������������\n\n"NOR,me, ob);
        message_vision(HIW"��������......\n\n$N���ڿ���˵����"+str+"\n",me, ob);
        ob->set_temp("for_vet",1);
        amount = random(sk/3)+30;
        coco = new("/obj/money/silver");
        coco->add_amount(amount);
        coco->move(me);
        message_vision(HIW"$N��$n��������շ���"+CHINESE_D->chinese_number(amount)+"��Ǯ��\n"NOR,me, ob);
        me->receive_damage("gin",50);
        me->receive_damage("sen",50);
        return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ��cmd vet <id> || ��ҽ��ʹ��
ָ��˵����
��������ҽ��Ӧ����������ľ��񣬶�ʹ�ô�ָ��������
���������������ƣ�������ν�����緢�ּ������ơ��㣡
HELP);
        return 1;
}

