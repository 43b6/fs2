inherit NPC;
inherit F_SAVE;

mapping quest_list = ([]);
string do_save (object me);
string do_quests (object me);

void create()
{
  // set("race", "������");
  set_name("�����ʴ��", ({ "quests man", "man" }) );
  restore();
  set ("inquiry", ([
       "save"	: (: do_save :),
       "quests" : (: do_quests :),
  ]) );

  quest_list = query("quests");
  setup();
}

// �������������Ӣ���ִ�
string do_quests (object me)
{
  string	*quests_name;
  string	line;
  int		i;

  line = "Ŀǰ����ռ乲�� \n";

  if (!mapp (quest_list) || sizeof (quest_list) == 0)
    return "Ŀǰ����ռ�û���κ�����\n";

  quests_name = keys (quest_list);
  for (i=0; i<sizeof (quest_list); i++)
     line += sprintf ("��%2d�� : %20s %s\n", i+1, quests_name[i],
             quest_list[quests_name[i]]);
  return line;
}

void remove(object ob) { save(); }

string query_save_file() { return QUEST; }

// ɾ��һ������
int delete_quest (string quest)
{
  // if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  // �� quest_list ɾ��һ�� quest
  map_delete(quest_list, quest);

  save();
  return 1;
}

// ��װһ�� quest
int install_quest (string quest, string chinese)
{
  // if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  quest_list[quest] = chinese;

  save();
  return 1;
}

string get_quest_name (string quest)
{
  return quest_list[quest];
}

string do_save (object me)
{
  save();
  return "�������ʴ����: �����Ѿ��浵��ɡ�\n";
}
