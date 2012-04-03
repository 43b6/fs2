inherit NPC;
#include <combat.h>
#include </open/open.h>
string do_thief();
string do_help();
void create()
{
        set_name("���޳�", ({ "chi wu-cheng","chi", "cheng" }) );
        set("title", "����ִ��");
        //set("nickname", "[1;34m��[36m��[34m��[36m��[34m��[36m��[34m��[36m��[0m NOR");
        set("class","officer");
        set("gender", "����" );
        set_max_encumbrance(1000000);
        set("age", 46);
        set("str", 20);
        set("cor", 20);
        set("cps", 20);
        set("int", 30);
        set("spi", 20);
        set("kar", 26);
        set("per", 20);
        set("con", 30);

        set("max_force", 2000);
        set("force", 2000);
        set("force_factor", 5);

        set("long", @LONG
    �˳ơ�����֮�⡯����˵��ϰ����񣬾�����˽ƈ�ҡ����������
���ն��ܾ�������Ҳ��Ϊ���Ĺ����Իͣ��Ȼ��ش���һ���з�������׼
�佫�����ӯ֮�ˣ���ն����!!
LONG);

        set("combat_exp",500000);
        set("score", 30000);

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
        "�޳����˺ȵ����󵨿�ͽ!!  ����!!\n",
        "�޳����˺ȵ�������֮�Ͼ�����Ұ!!  �����ϳ�!!\n"
        }) );

        set_skill("unarmed", 30);
        set_skill("force",  20);
        set_skill("parry",  20);
        set_skill("dodge",  20);
        set_skill("sword",  20);
        set_skill("literate", 90);

        set("inquiry", ([
          "������" : "��!! ˭����ץ���ǻ����˵Ļ���ն����!!",
          "accuse" : "�뼩�������˵Ļ������ȵ��ſڻ�����ԩ(accuse)��",
          "thief"  : (: do_thief :),
          "����"   : "��ץ��(thief)�͵��Ⱦ����Ҳ���, �������������б�������ˡ�",
          "test"   : "��ץ��(thief)�͵��Ⱦ����Ҳ���, �������������б�������ˡ�",
          "accept" : "Ҫ���ܲ�����? �Ǿʹ�(accept test)��",
          "��æ"   : (: do_help :),
        ]) );

        setup();
        carry_object(HALL_NPC"obj/god_sword")->wield();
        carry_object(HALL_NPC"obj/o_cloth")->wear();
}

int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="chi_letter")
        {
                destruct(ob);
                command("say ��!�ҵ��ţ���......��л����");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",1);
                        break;
                        case 2:
                        me->set("taigan_work",2);
                        break;
                        case 3:
                        me->set("taigan_work",3);
                        break;
                        }
        }
        else{
                command("say ��???���Ų��Ǹ��ҵģ����톪!!!");
                command("give"+ob->query("id")+me->query("id"));
            }
}
string do_help()
{
        int work,i,j,k;
        object me,ob,letter;
        me=this_player();
        ob=this_object();
        work=me->query("taigan_work");
        if(work!=1 || me->query_temp("working") ||me->query("class")!="taigan")
                return "������ûʲô����Ҫ���æ��ȥ���������費��Ҫ�ɡ�\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ϲ������������һ�˰ɡ�\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/chang_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ������ʳ����Ź������������һ�˰ɡ�\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/chan_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�������¼�ĳ¹������������һ�˰ɡ�\n";
                break;
        }
        }
}
string do_thief()
{
        object me=this_player();
        if( me->query("quests/catch_thief") == 0 )
        {
          if( me->query_temp("thief") == 0 )
            me->set_temp("thief",1);
          return (RANK_D->query_respect(me)+"�������æץ���Ǵ������? "+
                "ֻ����������û���µ���ǰ��Ӧ��\n, "+RANK_D->query_respect(me)+
                "���б��µĻ����Ƚ��ܲ��԰�(accept test)��");
        }
        else
        {
          command("smile");
          command("pat "+me->query("id"));
          return ("��������Ƕ������, ��񾩳��ָֻ�ƽ���ˡ�");
        }
}
void init()
{
        add_action("do_accept","accept");
}
int do_accept(string str)
{
        int i;
        object ob=this_object();
        object me=this_player();
        object mark=new(CAPITAL_OBJ"mark");
        if( me->query_temp("thief") == 0)
          command("say ������Ϊ��Ҫ���԰ɡ�");
        if( me->query_temp("thief") > 1)
          command("say ���ǲ��Թ�����?");
        if( me->query_temp("thief") == 1)
        {
        if( str=="test")
        {
          command("say ��! ���Ϸ���������! С����");
          for(i=0;i<5;i++)
            COMBAT_D->do_attack(ob, me, ob->query_temp("weapon"), TYPE_QUICK);
          if( me->query("kee") > 1 )
          {
            command("say ��Ȼ��\��\Ϊ\��Ӣ��, ���Ҿͽ������ԭԭ������˵��������");
            command("thank "+me->query("id"));
            command("say �⾩�Ǵ��ĿǰΪֹ�ѵ��ֲ�������, �������׸���ͨ���լ��Ҳ\n"+
            "            ������, �����ž�����������һ����֮�ڱ����ư�, ��Ȼ"+RANK_D->query_respect(me)+
            "\n            �Ը����, ������¾Ͱ������ˡ���������������鰸, ��ض��������͡�");
            message_vision("$N����$nһ�桸�������ơ���\n",ob,me);
            mark->move(me);
            command("say ϣ���������ƶ���참���������档");
            me->set_temp("thief",2);
          }
          else
          {
            command("say ���˰���, �һ��Ǽ�������Ӣ������");
            command("sigh");
          }
        }
        else
          write("����ʲô?!\n");
        }
        return 1;
}

int accept_object(object me, object man)
{
        string target = "���ٷ�";
        object ob=this_object();
        object reward;
        if( me->query_temp("thief") < 2 )
          return notify_fail(ob->query("name")+"˵������..�Һ���û���������������Ȼ����ô����, �Ǿ�л����\n");
        if( man->query("victim_name") == target || man->query("name") == target )
        {
          command("say ����̫����, ���и����������˳���Ĵ���ˡ�");
          if( man->query("name") == target )
          {
            command("say ����Լ��, �������Ӧ�õ��ͽ�\n");
            reward = new("/obj/money/gold");
            reward->set_amount(5);
            reward->move(me);
            message_vision("$N�͸�$n�����ƽ�\n",ob,me);
          }
          else
          {
            command("say ��ϧ�⾩�Ǵ������, ����ͽ�ֻ��һ���ˡ�");
            reward = new("/obj/money/gold");
            reward->set_amount(2);
            reward->move(me);
            message_vision("$N�͸�$n�����ƽ�\n",ob,me);
          }
          if( !me->query("quests/catch_thief") )
          {
            write("\n\n[1;36m**��ɾ��Ǵ��֮��***[0m\n��õ�ʵս���� 200��\n");
            me->add("combat_exp",200);
            if( me->query("class") == "officer" )
            {
              write("��õ�����Ȩ�� 20��\n");
              me->add("max_officer_power",20);
            }
            me->set("quests/catch_thief",1);
            me->delete_temp("thief");
          }
          destruct(man);
        }
        return 1;
}
