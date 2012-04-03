inherit NPC;
inherit F_SAVE;

mapping quest_list = ([]);
string do_ask (object me);
string do_quests (object me);

void create()
{
  // set("race", "������");
  set_name("�����ʴ��", ({ "quests man1", "man1" }) );
  restore();
  set ("inquiry", ([
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
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  // �� quest_list ɾ��һ�� quest
  map_delete(quest_list, quest);

  save();
  return 1;
}

// ��װһ�� quest
int install_quest (string quest, string chinese)
{
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  quest_list[quest] = chinese;

  save();
  return 1;
}

// �������������Ӣ���ִ�
string *query_quests ()
{
  if (!undefinedp (keys(quest_list)))
    return keys(quest_list);
  else return ({});
}

//  ��Ӣ���ִ�����������
string quest_chinese (string quest)
{
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  if ( !undefinedp(quest_list[quest]) )
    return quest_list[quest];
  else return "";
}

// �趨����Ѿ����ĳһ�� quest ���ڼ���
int set_quest (object ob, string quest, int step)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  ob->set(quest, step);

  return 1;
}

// ��ѯ����Ѿ����ĳһ�� quest ���ڼ���
int query_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  return (ob->query (quest));
}

// �趨ĳ����Ѿ����һ������
int set_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (!ob->query(quest)) return 0;
  ob->set(quest, -1);
  return 1;
}

// ��ѯ�Ƿ����һ������
int query_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (quest_list[quest] == "") return 0;
  if (ob->query(quest) == -1) return 1;
  else return 0;
}

// ������������� mapping
mapping query_quests_ob()
{
  if ( !undefinedp (quest_list) ) return quest_list;
  else return ([]);
}

// ������� quests ����
int query_n_f_quests (object ob)
{
  int           i, c;

  if (!ob) return 0;
  for (i=c=0; i<sizeof(quest_list); i++)
    if (ob->query_finish_quest (keys(quest_list)[i])) c++;
  return c;
}

// ������ֵȡ��������������
string query_quest_cname (int idx)
{
  if (idx >= sizeof (quest_list)) return "";
  if (!undefinedp(quest_list)) return quest_list[keys(quest_list)[idx]];
  else return "";
}

// ������ֵȡ��Ӣ����������
string query_quest_name (int idx)
{
  if (idx >= sizeof (quest_list)) return "";
  if (!undefinedp(quest_list)) return keys(quest_list)[idx];
  else return "";
}
