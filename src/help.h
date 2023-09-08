#ifndef SKHD_HELP_H
#define SKHD_HELP_H

#define HELP_USAGE                                                             \
  "Usage: skhd [options]\n\n"                                                  \
  "Options:\n"                                                                 \
  "--install-service: Install launchd service file into "                      \
  "~/Library/LaunchAgents/com.koekeishiya.skhd.plist\n"                        \
  "    skhd --install-service\n"                                               \
  " \n"                                                                        \
  "--uninstall-service: Remove launchd service file "                          \
  "~/Library/LaunchAgents/com.koekeishiya.skhd.plist\n"                        \
  "    skhd --uninstall-service\n"                                             \
  " \n"                                                                        \
  "--start-service: Run skhd as a service through launchd\n"                   \
  "    skhd --start-service\n"                                                 \
  " \n"                                                                        \
  "--restart-service: Restart skhd service\n"                                  \
  "    skhd --restart-service\n"                                               \
  " \n"                                                                        \
  "--stop-service: Stop skhd service from running\n"                           \
  "    skhd --stop-service\n"                                                  \
  " \n"                                                                        \
  "-V | --verbose: Output debug information\n"                                 \
  "    skhd -V\n"                                                              \
  " \n"                                                                        \
  "-P | --profile: Output profiling information\n"                             \
  "    skhd -P\n"                                                              \
  " \n"                                                                        \
  "-v | --version: Print version number to stdout\n"                           \
  "    skhd -v\n"                                                              \
  " \n"                                                                        \
  "-c | --config: Specify location of config file\n"                           \
  "    skhd -c ~/.skhdrc\n"                                                    \
  " \n"                                                                        \
  "-o | --observe: Output keycode and modifiers of event. Ctrl+C to quit\n"    \
  "    skhd -o\n"                                                              \
  " \n"                                                                        \
  "-r | --reload: Signal a running instance of skhd to reload its config "     \
  "file\n"                                                                     \
  "    skhd -r\n"                                                              \
  " \n"                                                                        \
  "-h | --no-hotload: Disable system for hotloading config file\n"             \
  "    skhd -h\n"                                                              \
  " \n"                                                                        \
  "-k | --key: Synthesize a keypress (same syntax as when defining a "         \
  "hotkey)\n"                                                                  \
  "    skhd -k \"shift + alt - 7\"\n"                                          \
  " \n"                                                                        \
  "-t | --text: Synthesize a line of text\n"                                   \
  "    skhd -t \"hello, worldシ\"\n"

#endif // SKHD_HELP_H
