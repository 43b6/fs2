// officer1.c by konn
// pkla �������Ӹĳ�һ����

#include <ansi.h>
inherit NPC;

object pker_master, pker_fighter;

void create()
{
        set("title", "������̨������");
        set_name("���ܹ�", ({"pkla officer", "officer"}));
        set("long", "\n���Ǳ�����̨�������ˡ�\n");

        set("race", "����");
        set("gender", "����");
        set("attitude", "friendly");

        set_skill("unarmed", 100);
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set("no_kill", 1);

        pker_master=0;
        pker_fighter=0;
        setup();
 }

void init()
{
        add_action("doing_encourage_pkla", "encourage-pkla");
		add_action("doing_encourage_pot", "encourage-pot");
}

int doing_encourage_pkla()
{
        object me = this_player();

          if( me->query("pk_convert") >= (me->query("pk_win")/100) ) {
            tell_object(me, HIY"���ܹ�˵��: ��Ļ�ʤ���������������ı�׼��\n"NOR
);
            return 1;
        }
                if( !me->query("max_standby"))
                {
                 me->set("max_standby",50);
        }
//     if(me->query("standby_dead_time"))
//     if(me->query("standby_dead_time")+86400 > time())
//       return notify_fail("�������Ÿ�������, �Ҳ��ܷ��������, �����������!!\n");
        if(me->query("standby"))
          return notify_fail("�㲻���Ѿ���һ����???\n");

        if(me->query("t_standby")<me->query("max_standby"))
        {
        me->add("t_standby",1);
        me->add("pk_convert", 1);
        me->add("standby", 1);
        tell_object(me, HIY"���ܹ�˵��: ��ϲ��������һ��, �ڽ�Ҫ��ͷ����"+
                        "�����㵽�ظ���һ�˵ġ�\n"NOR);
                log_file("pkstdby", sprintf("%s ��pkla����һ������ on %s\n"
        ,me->query("id"), ctime(time()) ));
        }
        else{
        tell_object(me, HIY"���ܹ�˵��: ������ӵ�е����������Ѵ����ޣ��޷������ӡ�\n"NOR);}

        return 1;
}
int doing_encourage_pot()
{
        object me = this_player();

          if( (int)me->query("potential") - (int)me->query("learned_points") <100000 ) {
            tell_object(me, HIY"���ܹ�˵��: ���Ǳ��ֵ����������\n"NOR
);
            return 1;
        }
                if( !me->query("max_standby"))
                {
                 me->set("max_standby",50);
        }
//     if(me->query("standby_dead_time"))
//     if(me->query("standby_dead_time")+86400 > time())
//     return notify_fail("�������Ÿ�������, �Ҳ��ܷ��������, �����������!!\n");
        if(me->query("standby"))
          return notify_fail("�㲻���Ѿ���һ����???\n");

        if(me->query("t_standby")<me->query("max_standby"))
        {
        me->add("t_standby",1);
        me->add("potential",-100000);
        me->add("standby", 1);
        tell_object(me, HIY"���ܹ�˵��: ��ϲ��������һ��, �ڽ�Ҫ��ͷ����"+
                        "�����㵽�ظ���һ�˵ġ�\n"NOR);
                log_file("potstdby", sprintf("%s ��pot����һ������ on %s\n"
        ,me->query("id"), ctime(time()) ));
        }
        else{
        tell_object(me, HIY"���ܹ�˵��: ������ӵ�е����������Ѵ����ޣ��޷������ӡ�\n"NOR);}

        return 1;
}

int set_master(object me)
{
        pker_master = me;
        return 1;
}

int set_fighter(object me)
{
        pker_fighter = me;
        return 1;
}

int delete_master()
{
        pker_master = 0;
        return 1;
}

int delete_fighter()
{
        pker_fighter = 0;
        return 1;
}

int pk_ing()
{
        shout(HIC"���ܹ�˵��: ����ʱ�䵽, ֹͣѺע��\n"NOR);
        shout(HIC"���ܹ�˵��: ����λ���ֵ���һ����ݿ�ʼ������\n"NOR);
        shout(HIC"���ܹ�˵��: ����ʱ��Ϊ��ʮ���ӡ�\n"NOR);
        pker_master->set_temp("pk_fight", 1);
        pker_fighter->set_temp("pk_fight", 1);
        pker_master->set_temp("pk_room", environment(pker_master));
        pker_fighter->set_temp("pk_room", environment(pker_fighter));
pker_master->move("/open/gblade/room/pkroom/pkr"+pker_master->query_temp("pkr")+".c");
pker_fighter->move("/open/gblade/room/pkroom/pkr"+pker_fighter->query_temp("pkr")+".c");
        this_object()->set_temp("pking_time", 1);
        return 1;
}

int doing_list(object me)
{
        set_heart_beat(1);
        if( !pker_master ) {
            tell_object(me, "Ŀǰ��̨��û���κ��ˡ�\n");
            return 1;
        }
        printf("\n��̨�ϴ�:\n");
        if( pker_fighter ) {
            tell_object(me, sprintf("    \n%s(%s) VS %s(%s)\n\n",
                            pker_master->name(), pker_master->query("id"),
                            pker_fighter->name(), pker_fighter->query("id")));
        }
        else tell_object(me, sprintf("    \n%s(%s) ���ܸ�λ����ս��\n\n",
                             pker_master->name(), pker_master->query("id")));
        return 1;
}

int doing_me(object me)
{
if(me->query("potential")-(me->query("learned_points")) < 210)
return notify_fail("���Ǳ�ܲ�����\n");
        if( me == pker_master ) {
            tell_object(me, "���Ѿ�����ս���ˡ�\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "���Ѿ�������ս�ˡ�\n");
            return 1;
        }
        if( pker_master ) {
            tell_object(me, "�Ѿ����˽����ȵ���, �㿼�ǿ��Ǹ������аɡ�\n");
            return 1;
        }
        if( pker_master && pker_fighter ) {
            tell_object(me, "�����Ѿ���ʼ��, ����һ���ɡ�\n");
            return 1;
        }
        if( !me->pay_money(30000) ) {
            tell_object(me, "��û���㹻��Ǯ��������, sorry ��! ^_^\n");
            return 1;
        }

        tell_object(me, "�㸶�������ƽ�ı����Ѹ����ܹܡ�\n");
        set_master(me);
        shout(HIC"\n���ܹܺȵ�: "HIW+me->name()+HIC"Ը�������̨��ս��"+
              "��������ֺ���ǰ���д����ա�\n"NOR);
        tell_object(me, HIC"\n���ܹܺȵ�: "HIW+me->name()+HIC"Ը�������"+
                        "̨��ս����������ֺ���ǰ���д����ա�\n"NOR);
        this_object()->set_temp("wait_pk", 1);
        return 1;
}

int doing_accept(object me)
{
if(me->query("potential")-(me->query("learned_points")) < 210)
return notify_fail("��Ǳ�ܲ�����\n");
        if( me == pker_master ) {
            tell_object(me, "���Ѿ�����ս��, �����ٽ��ܱ��˵���ս��\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "���Ѿ����ܱ��˵���ս��\n");
            return 1;
        }
        if( pker_master && pker_fighter ) {
            tell_object(me, "��̨�Ѿ�������, ��ȴ���һ����\n");
            return 1;
        }
        if( !pker_master ) {
            tell_object(me, "Ŀǰ��̨û����, ��Ը����ս������?\n");
            return 1;
        }
// ֮ǰ 2 ��̫С�� 4 �� by swy
if(!wizardp(me) && !wizardp(pker_master))
if(4*me->query("combat_exp") < pker_master->query("combat_exp") ||
me->query("combat_exp") > 4*pker_master->query("combat_exp")) {
               tell_object(me, "��ľ���ֵ�Ͷ������̫�ࡣ\n");
               return 1;
        }
        if( !me->pay_money(30000) ) {
            tell_object(me, "��û���㹻��Ǯ��������, sorry ��! ^_^\n");
            return 1;
        }

        tell_object(me, "�㸶�������ƽ�ı����Ѹ����ܹܡ�\n");
        set_fighter(me);
        pker_master->set("break_away" ,1);
        pker_fighter->set("break_away" ,1);
        shout(HIC"���ܹܺȵ�: "HIW+pker_master->name()+HIC"��"HIW+
              me->name()+HIC"����һ���Ӻ�ʼ������\n"NOR);
        tell_object(me, HIC"���ܹܺȵ�: "HIW+pker_master->name()+HIC+
                        "��"HIW+me->name()+
                        HIC"����һ���Ӻ�ʼ������\n"NOR);
        shout(HIC"���ܹ�˵��: ҪѺ��ע���뾡��, ��ʱˡ������\n"NOR);
        tell_object(me, HIC"���ܹ�˵��: ҪѺ��ע���뾡��, ��ʱˡ������\n"NOR);
        this_object()->set_temp("pking", 1);
        this_object()->delete_temp("wait_pk");
        this_object()->set_temp("pkla_time", 1);
        return 1;
}

int doing_end(object me)
{
        if( me != pker_master && me != pker_fighter ) {
            tell_object(me, "�㲢û�вμ���̨����\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "���Ѿ����ܱ��˵���ս�޷����ء�\n");
            return 1;
        }
        if( me == pker_master && pker_fighter ) {
            tell_object(me ,"�Ѿ����˽��������ս��, �������˵�ɡ�\n");
            return 1;
        }

        delete_master();
        shout(HIC"\n���ܹܺȵ�: "HIW+me->name()+HIC"�˳�������"+
              "��ư�Ϊ��������Ǣ���ҡ�\n"NOR);
        tell_object(me, HIC"\n���ܹܺȵ�: "HIW+me->name()+HIC"�˳�������"+
                        "��ư�Ϊ��������Ǣ���ҡ�\n"NOR);
        this_object()->delete_temp("wait_pk");
        return 1;
}

int doing_winner(object me)
{
        object *user;
        string desc = "";
        int i, sam = 0;

        user = users();
        desc += "        ��      һ      ��      ��      ��      ʤ      ��      ��\n\n";
        for(i=0; i<sizeof(user); i++) {
           if( !wizardp(user[i]) ) {
               desc += sprintf("  %10s%12s  ʤ:%-3d��:%-3d",
                               user[i]->name(), "("+user[i]->query("id")+")",
                               user[i]->query("pk_win"),
                               user[i]->query("pk_lose"));
               if( sam % 2 == 1 ) desc += "\n";
               sam += 1;
           }
        }
        desc += "\n";
        me->start_more(desc);
        return 1;
}

int doing_bet(object me, string pk, int number)
{
        if( me->query_skill("gamble", 1) < 50 ) {
            tell_object(me, "��������ʮ���ſ�Ѻע, ���ٶ����͡�\n");
            return 1;
        }
        if( me == pker_master || me == pker_fighter ) {
            tell_object(me, "���ڴ���̨��Ѻʲôע?\n");
            return 1;
        }
        if( !this_object()->query_temp("pkla_time") ) {
            tell_object(me, "Ѻעʱ���ѹ�, �´������ʱ�䡣\n");
            return 1;
        }
        if( me->query_temp("bet_pker") ) {
            tell_object(me, "���Ѿ�Ѻ����ע��, �����ĵȴ����������\n");
            return 1;
        }
        if( find_player(pk) != pker_master &&
            find_player(pk) != pker_fighter  ) {
            tell_object(me, "��λ��Ҳ�û�д���̨����\n");
            return 1;
        }

            if( number > 300000 || number < 0 ) {
                tell_object(me, "��Ѻ�Ķ�ע���Ϲ涨, �����ʮ��\n");
                return 1;
            }
            if( !me->pay_money(number) ) {
                tell_object(me, "�ı�������������?\n");
                return 1;
            }
            me->set_temp("bet_pker", pk);
            me->set_temp("bet_number", number);
            tell_object(me, "�㸶�����ܹ�"+chinese_number(number)+"��Ǯ��\n");
        return 1;
}

int full_all(object me)
{
        int gin, kee, sen;

        gin = me->query("max_gin");
        kee = me->query("max_kee");
        sen = me->query("max_sen");
        me->set("eff_gin", gin);
        me->set("eff_kee", kee);
        me->set("eff_sen", sen);
        me->set("gin", gin);
        me->set("kee", kee);
        me->set("sen", sen);
        return 1;
}

int pk_winner(object win)
{
        full_all(win);
        tell_object(win, HIY"���ܹ�˵��: ��������!\n"NOR);
        win->remove_all_killer();
        win->clear_condition();
        win->move(win->query_temp("pk_room"));
        win->delete_temp("pk_room");
        win->delete_temp("over");
        win->delete_temp("hand-all");
        win->delete_temp("eyes-all");
if(pker_master->query("potential")-(pker_master->query("learned_points"))>210
&&pker_fighter->query("potential")-(pker_fighter->query("learned_points"))>210)
{
        win->add("potential", 100);
        win->add("pk_win", 1);
}
        win->delete("break_away");
        win->delete_temp("pk_fight");
        return 1;
}

int pk_loser(object lose)
{
        full_all(lose);
        tell_object(lose, HIY"���ܹ�˵��: ��������!\n"NOR);
        lose->remove_all_killer();
        lose->clear_condition();
        lose->delete_temp("over");
        lose->delete_temp("hand-all");
        lose->delete_temp("eyes-all");
        lose->delete_busy();
        lose->move("/open/wiz/courthouse");
        lose->delete_temp("pk_room");
        lose->add("potential", -130);
        lose->delete("break_away");
        lose->delete_temp("pk_fight");
        lose->add("pk_lose", 1);
if(lose->query("potential")-(lose->query("learned_points")) < 0)
{
lose->set("potential",0);
lose->set("learned_points",0);
lose->add("pklaʹpot������¼",1);
}
        return 1;
}

int winner(object win, object lose)
{
        object *user;
        int i;

        this_object()->delete_temp("pking");
        this_object()->delete_temp("pkla_time");
        this_object()->delete_temp("pking_time");
        this_object()->delete_temp("wait_pk");
        if( !win && !lose ) {
            if( pker_master && pker_fighter ) {
                shout(HIC"\n���ܹܺȵ�: ˫����������ʱ��δ�ֳ�ʤ��, ������"+
                      "����, �Է�Ǳ��һ����ʮ��, ����������\n");
                pk_loser(pker_master);
                tell_object(pker_master,
                     HIR"���ܹܸ�����: �ܱ�Ǹ, ����̫����, �����ܵ�ͷ���\n"NOR);
                pk_loser(pker_fighter);
                tell_object(pker_fighter,
                     HIR"���ܹܸ�����: �ܱ�Ǹ, ����̫����, �����ܵ�ͷ���\n"NOR);
            }
            else shout(HIC"\n���ܹܺȵ�: ˫������Ȩ, ��˱�����ʤ��, ����һ������׼����\n"NOR);
        }
        else if( !lose ) {
            shout(HIC"���ܹܺȵ�: ����ʤ���ѷ�! "HIW+win->name()+HIC"�������ʤ��!\n"NOR);
            pk_winner(win);
            tell_object(win, HIR"���ܹܸ�����: pk��ʤ, �õ�һ�ٵ�Ǳ�ܡ�"+
                                "��ӭ�´�����!\n"NOR);
        }
        else {
            shout(HIC"���ܹܺȵ�: ����ʤ���ѷ�! "HIW+lose->name()+HIC"��"+
                  "����¾..., ʤ��"HIW+win->name()+"!\n"NOR);
            pk_winner(win);
            tell_object(win, HIR"���ܹܸ�����: pk ��ʤ, �õ�һ�ٵ�Ǳ�ܡ�"+
                                "��ӭ�´�����!\n"NOR);
            pk_loser(lose);
            tell_object(lose, HIR"���ܹܸ�����: pk ����, �����һ����������! "+
                                 "��һ����ʮ��Ǳ��, ϣ�������Ŭ��, �´�������\n"NOR);
        }
        delete_master();
        delete_fighter();
// �ж���Ѻ��ע�������Ӯ
        user = users();
        for(i=0; i<sizeof(user); i++) {
           if( user[i] && user[i]->query_temp("bet_pker") ) {
               if(win) {
                  if(user[i]->query_temp("bet_pker") == win->query("id")) {
                     user[i]->pay_player((int) 2 *
                            user[i]->query_temp("bet_number"));
                     tell_object(user[i],
                          NOR"���ܹܱ��Ŵ�������˹�����\n"+
                          HIR"���ܹܸ�����: ��ϲ��ĳ���ʤ! ��ӭ�´�������\n"+
                          NOR"���ܹܴӴ������ó�һ��������������һ����\n"+
                          NOR"���ܹܱ��Ŵ��������һ��������˹�ȥ��\n"NOR);
                  }
                  else tell_object(user[i],
                            HIR"���ܹܸ�����: �ܱ�Ǹ! �ж�����, �뿴���㡣\n"+
                            NOR"ֻ�����ӵ�һ����ݴ���һ���Ц: "+
                            "׬����! ׬����! �۹�����������\n"NOR);
               }
               else tell_object(user[i],
                         HIR"���ܹܸ�����: �ܱ�Ǹ! ˫������Ȩ��, ��˷ֲ���"+
                         "��Ӯ, ��עҲû�������ㆪ!\n"+
                         HIY"���ܹ����ε������ʼ硣\n"NOR);
               user[i]->delete_temp("bet_pker");
               user[i]->delete_temp("bet_number");
           }
        }
        if( win && !userp(win) ) destruct(win);
        if( lose && !userp(lose) ) destruct(lose);
        return 1;
}

string query_player()
{
        if( query("str") )
            return query("str");
        return "";
}

// damage.c ��ֱ�Ӻ��������ʽ
int pk_lose(object me)
{
        if( me == pker_master )
            winner(pker_fighter, pker_master);
        else winner(pker_master, pker_fighter);
        return 1;
}

int break_away(object me, string arg)
{
        int i;

        full_all(me);
        me->add("potential", -200);
        me->delete("break_away");
        me->delete_temp("pk_fight");
        me->clear_condition();
        me->apply_condition("dark_poison", 0);
        me->apply_condition("five_poison", 0);
        me->apply_condition("rose_poison", 0);
        me->apply_condition("snake_poison", 0);
        me->apply_condition("burn", 0);
        me->add("pk_lose", 1);
        me->move(me->query("startroom"));
        tell_object(me, HIR"���ܹܸ�����: pk ����, �뷣˫��, ������"+
                          "��Ǳ��, ϣ�������Ŭ��, �´�����!\n"NOR);
        if( strlen(arg) ) {
            for(i=0; i<strlen(arg); i++) {
                tell_object(me, arg[i]);
            }
        }
        add("str", me->query("id")+" "+arg+"\n");
        return 1;
}

void heart_beat()
{
        object *user;
        int i, gin, kee, sen;

        set_heart_beat(1);

// Ҫ�����pk ʱ����������Щ
        if( query_temp("pking") ) {
            if( !pker_master )
                winner(pker_fighter,0);
            else if( pker_master->query_temp("netdead") )
                winner(pker_fighter, pker_master);
            else if( !pker_fighter )
                winner(pker_master, 0);
            else if( pker_fighter->query_temp("netdead") )
                winner(pker_master, pker_fighter);
            else if( !pker_fighter && !pker_master )
                winner(0, 0);
            else if( pker_master->query_temp("netdead") &&
                     pker_fighter->query_temp("netdead")  )
                winner(0, 0);
            if( environment(pker_master) == environment(pker_fighter) &&
                (!pker_master->is_fighting() || !pker_fighter->is_fighting()) &&
                pker_master->query_temp("pk_fight") &&
                pker_fighter->query_temp("pk_fight")                         ) {
                pker_master->kill_ob(pker_fighter);
                pker_fighter->kill_ob(pker_master);
            }
            if( query_temp("pkla_time") ) {
                if( query_temp("pkla_time") == 24 ) { //�ĳ�һ����
                    delete_temp("pkla_time");
                    pk_ing();
                }
                else {
                   if( query_temp("pkla_time") == 22 ) //һ���ӵĲ���
                       shout(HIC"���ܹܺȵ�: �����ʱ�仹��ʮ��, ��"+
                                pker_master->name()+"��"+pker_fighter->name()+
                                "��λԤ����\n"NOR);
                   add_temp("pkla_time", 1);
                }
            }
        }
        else{
          if(!query_temp("wait_pk")){
            if(pker_master) delete_master();
            if(pker_fighter) delete_fighter();
          }
        }



// pk ����20 ����, ��˫��������Ȩ, �����ͷ�
        if( query_temp("pking_time") ) {
            if( query_temp("pking_time") == 480 )
                winner(0, 0);
            else add_temp("pking_time", 1);
        }
}
