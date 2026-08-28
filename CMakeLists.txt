include(FetchContent)

FetchContent_Declare(
    kiwi
    GIT_REPOSITORY https://github.com/nucleic/kiwi
    GIT_TAG        {release name}
)

FetchContent_MakeAvailable(kiwi)

target_link_libraries(your_target PRIVATE kiwi::kiwi)
