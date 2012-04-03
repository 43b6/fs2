// ����ʽ�׶��� fund ׫д
// ������ wade
inherit F_SAVE;

mapping	quest_list;

void create()
{
  restore();
}

void remove(string euid) { save(); }

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

  if (save())
    return 1;
  else return 0;
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
  // if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  ob->set_temp(quest, step);

  return 1;
}

// ��ѯ����Ѿ����ĳһ�� quest ���ڼ���
int query_quest (object ob, string quest)
{
  if (!ob) return 0;
  // if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  return (ob->query_temp (quest));
}

// �趨ĳ����Ѿ����һ������
int set_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  // if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (!ob->query(quest)) return 0;
  ob->add(quest, 1);
  return 1;
}

// ��ѯ�Ƿ����һ������
int query_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  // if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (quest_list[quest] == "") return 0;
  return (ob->query(quest));
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

int query_quests_n ()
{
  return sizeof (quest_list);
}
