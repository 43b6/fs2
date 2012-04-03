#define ROOT_DIR "/data/new_board/"

inherit ITEM;
inherit F_SAVE;

void create()
{
  set_name("BBS 系统索引档", ({ "board_index", }) );
  if (!restore()) {
    set("long", "天听自我民听，众巫师有话就留，没话快滚。\n");
    set("unit", "个");

    set ("save_file", ROOT_DIR"BBS_desc");
  }

  setup();
}

string query_save_file()
{
        return query("save_file");
}
