// winroom.c bye konn
#include <ansi.h>
inherit ROOM;

void create() {
        set("short","���ܹܵļ�");
        setup();
}

void init() {
        int i;
        object enemy,me,*user;

        me = this_object();
        if(!me->query_temp("fight")) {
           write("����������ʲô?\n");
           return ;
        }
        enemy = find_player(me->query_temp("enemy"));
        tell_object(me,HIY"���ܹ�˵��: ��������!\n"NOR);
        tell_object(enemy,HIY"���ܹ�˵��: ��������!\n"NOR);
        me->remove_all_killer();
        enemy->remove_all_killer();
        shout(HIC"���ܹܺȵ�: ����ʤ���ѷ�! "HIW+me->name()+HIC"��"+
              "����¾..., ʤ��"HIW+enemy->name()+"!\n"NOR);
        me->add("potential", -100);
        enemy->add("potential", 100);
        me->pay_money(100000);
// ����������!
       if(me->query_temp("pker"))
          me->delete_temp("pker");
       else me->delete_temp("pker_master");
       if(enemy->query_temp("pker"))
          enemy->delete_temp("pker");
       else enemy->delete_temp("pker_master");
       me->delete_temp("fight");
       enemy->delete_temp("fight");
       me->delete_temp("pk_room");
       enemy->delete_temp("pk_room");
       me->delete_temp("enemy");
       enemy->delete_temp("enemy");
       me->delete_temp("go_away");
       enemy->delete_temp("go_away");
       me->set("eff_kee", 100);
       me->set("kee", 100);
// �ٰ���pkla ���еĶ����!
       me->apply_condition("dark_poison", 0);
       me->apply_condition("five_poison", 0);
       me->apply_condition("rose_poison", 0);
       me->apply_condition("snake_poison", 0);
       me->apply_condition("burn", 0);
       enemy->apply_condition("dark_poison", 0);
       enemy->apply_condition("five_poison", 0);
       enemy->apply_condition("rose_poison", 0);
       enemy->apply_condition("snake_poison", 0);
       enemy->apply_condition("burn", 0);
// ��player ����!
       me->move(me->query("startroom"));
       enemy->move(enemy->query("startroom"));
       tell_object(enemy,HIR"���ܹܸ�����: pk ��ʤ, �õ�һЩǱ��! "+
                         "��ӭ�´�����!\n"NOR);
       tell_object(me,HIR"���ܹܸ�����: pk ����, �����һ��������! "+
                      "�����ֽ�10 ��, ����5% ��Ǳ��, ϣ����ú���,"+
                         " �´�����!\n"NOR);
// �ж���Ѻ��ע�������Ӯ
        user = users();
        for(i=0; i<sizeof(user); i++) {
           if(user[i]->query_temp("pkla_pker")) {
              if(user[i]->query_temp("pkla_pker") == me->query("id"))
                 tell_object(user[i],
                             HIR"���ܹܸ�����: �ܱ�Ǹ! �ж�����, �뿴����!\n"NOR
);
              else {
                 if(user[i]->query_temp("pkla_kind") == "money")
                    user[i]->pay_player(1.5*user[i]->query_temp("pkla_number"));
                 else
                    user[i]->add(user[i]->query_temp("pkla_kind"),
                                 1.5*user[i]->query_temp("pkla_number"));
                 tell_object(user[i],
                             HIR"���ܹܸ�����: ��ϲ��ĳ���ʤ! ��ӭ�´�����!\n"NOR);
                 tell_object(user[i],
                             HIR"���ܹܸ�����: ���������, �����Ӯ���ݽɽ�һ���X��!\n");
              }
              user[i]->delete_temp("pkla_pker");
              user[i]->delete_temp("pkla_kind");
              user[i]->delete_temp("pkla_number");
           }
        }
}
