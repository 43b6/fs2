#define ROOT_DIR "/data/new_board/"

inherit ITEM;
inherit F_SAVE;

void create()
{
  set_name("BBS ϵͳ������", ({ "board_index", }) );
  if (!restore()) {
    set("long", "������������������ʦ�л�������û�������\n");
    set("unit", "��");

    set ("save_file", ROOT_DIR"BBS_desc");
  }

  setup();
}

string query_save_file()
{
        return query("save_file");
}
