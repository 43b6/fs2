// rewrite from washboy.c
// harlot.c by powell
// add quest ����֤�� & ����ˮ�� by wade

#include "/open/open.h"
inherit NPC;

string do_ask1();
string do_ask2();

void create()
{
        set_name("��Ů", ({ "Harlot", "harlot" }) );
        set("race", "����");
        set("gender", "Ů��");
        set("age", 18);
        set("long", "������;�˺��һ����֬, ��æ����ɫ��Ǯ�Ĵ�ү��\n");
        set("attitude", "peaceful");
        set("str", 17);
        set("cor", 15);
        set("combat_exp",318);
        set("chat_chance", 5);
        set("chat_msg",({

             "��Ů΢Ц�����˿��������.....\n",
             "��Ů��üŪ�۵Ķ���˵�� : ��ү ! �벻��������ѽ��\n",
             "��Ů������ĵ� : ˮ�ɹ��ﲻ����, ����Ժ���������˲���..\n",
             "��Ů͵͵�ĸ����� : ����֪��ˮ�ɹ����������? \n",
             "��Ů���������˵�� : ��ү�뵽¥����Ϣ��?\n",
             "��ŮЦ�� : ��ү�����������Ȥ, ������������Ǣ��Ǣ�.\n",

        }));
        set("inquiry", ([
            "�ƻ���"            :       "�꣬��Ҫ������? ������Ҳ�ʵõ�? ����졣",
            "���"              :       "�����û���ԣ���СŮ�������Ź���",
            "���˹�"            :       "���Ƕ��˾ۼ��ĵط���������Ҳû�ã�ȥ���ʻ��˰ɡ�",
            "����Ժ"            :       "����֪����? ����Ժ�ϰ��Ƕ���������ΤС����",
            "���"              :       "���Ҫ��������ú��к�����, ��������ѡ����!",
            "ˮ�ɹ���"          :       (: do_ask1 :),
            "�����"            :       (: do_ask2 :),
            "Ӣ���ĸ����"      :       (: do_ask2 :),
        ]) );
        set_temp("apply/attack", 10);
        set_temp("apply/damage", 2);
        set_temp("apply/armor", 2);

        setup();
       carry_object(CENTER_OBJ"cloth2")->wear();
       carry_object(CENTER_OBJ"pant1")->wear();
}

// ��ˮ�ɵ���ͷ
string do_ask1()
{
  object me=this_player();

  if (me->query("quests/help_water_god")) {
    me->delete_temp("quests/help_water_god");
    if (random(2))
      return "���ˣ����Ҫ��лл���æ�ȳ�ˮ�ɹ��";
    else
      return "��ҲҪ���Ĺ��������������ˮ��ˮ�ɵġ�";
  }
  else if (me->query_temp("quests/help_water_god"))
    switch (random(5)) {
      case 0:
        return "���ϣ����Ѿ�������֪���Ķ�˵��ѽ��";
        break;
      case 1:
        return "����¿�ͷ������Ϊ�Ǹ�Ӣ����С���";
        break;
      case 2:
        return "��ʵҪ����ˮ�ɹ����ȽӴ���λС�磬��Ҳ�ᰮ�����ġ�";
        break;
      case 3:
        return "��˵ˮ������Ӣ����С����������Ժ������������ҹ������ɷ���ˡ�";
        break;
      default:
        return "һ�����ʣ�������������";
    }
  else {
    me->set_temp("quests/help_water_god", 1);
    return ("������˵���ϴ��и�Ӣ���ĸ��������" +
        "��ˮ�ɹ����ʧ�����ǵ��ˡ�\n"+
        "��Ů����˵��: ���Ҫ����ˮ�ɹ������Խ��Խ������"+
        "���ƻ������˷����ˣ�����Ҳ���������ˡ�");
  }
}

string do_ask2()
{
  object me=this_player();
  int   query;

  query = me->query_temp("quests/help_water_god");
  if (!query || me->query("quests/help_water_god"))
  {
    if (random(2))
      return "��Ӣ���ĸ���ǹ�����ɶ�°�������ҽ�����ȥ����";
    else
      return "����˵Ц�ˣ����������һλӢ���ĸ������?";
  }
  switch (random(7)) {
        case 0:
          return "��λ���ָ�ˮ�ɹ����������ڱ�׷ɱ�������Ͽ�ȥ��Ȱɡ�";
          break;
        case 1:
          return "��ѽѽ��������Ȼ���������СŮ���޷����棬ȫ�����ˡ�";
          break;
        case 2:
          return "��λ���ָ����ˮ�ɹ���Ķ�Ƥ�����˾�˽��ȥ�ˡ�";
          break;
        case 3:
          return "��˵ˮ�ɹ��ﱾ����������ƻ����������Ů��"+
               "��Ů˵����������λ���־�Ī�����ˡ�";
          break;
        case 4:
          return "��������һλ�����ϵĺ����ѣ���ʲô����? һʱ�����ˡ�";
          break;
        case 5:
          return "���ˮ�ɹ���Ļ��������ǸϿ���·�ɡ�";
          break;
        default:
          return "һ�����ʣ�������������";
  }
}
